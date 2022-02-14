
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int multipart_state; size_t multipart_index; char* multipart_lookbehind; } ;
typedef TYPE_1__ ebb_request_parser ;
struct TYPE_7__ {char* multipart_boundary; int (* on_part_data_complete ) (TYPE_2__*) ;int multipart_boundary_len; int number_of_multipart_headers; int (* on_multipart_headers_complete ) (TYPE_2__*) ;} ;


 char VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int ,char const*,size_t) ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 char FUNC_4 (char) ;

size_t FUNC_5(ebb_request_parser* VAR_6, const char *VAR_7, size_t VAR_8)
{
  size_t VAR_9 = 0;
  size_t VAR_10 = 0;
  char VAR_11, VAR_12;
  int VAR_13 = 0;

  while(!VAR_13) {
    VAR_11 = VAR_7[VAR_9];
    VAR_13 = (VAR_9 == (VAR_8 - 1));
    switch (VAR_6->multipart_state) {
      case 129:
  VAR_1->number_of_multipart_headers = 0;
        VAR_6->multipart_index = 0;
        VAR_6->multipart_state = 128;


      case 128:

        if (VAR_6->multipart_index == VAR_1->multipart_boundary_len + 2) {
          if (VAR_11 != VAR_0) {
            return VAR_9;
          }
          VAR_6->multipart_index++;
          break;
        } else if (VAR_6->multipart_index == (VAR_1->multipart_boundary_len + 3)) {
          if (VAR_11 != VAR_2) {
            return VAR_9;
          }
    VAR_1->number_of_multipart_headers = 0;
          VAR_6->multipart_index = 0;
          VAR_6->multipart_state = 141;
          break;
        }
        if (VAR_11 != VAR_1->multipart_boundary[VAR_6->multipart_index]) {
          return VAR_9;
        }
        VAR_6->multipart_index++;
        break;

      case 141:
        VAR_10 = VAR_9;
        VAR_6->multipart_state = 142;


      case 142:
        if (VAR_11 == VAR_0) {
          VAR_6->multipart_state = 137;
          break;
        }

        if (VAR_11 == '-') {
          break;
        }

        if (VAR_11 == ':') {
          FUNC_1(VAR_3, VAR_7 + VAR_10, VAR_9 - VAR_10);
          VAR_6->multipart_state = 138;
          break;
        }

        VAR_12 = FUNC_4(VAR_11);
        if (VAR_12 < 'a' || VAR_12 > 'z') {
          return VAR_9;
        }
        if (VAR_13)
          FUNC_1(VAR_3, VAR_7 + VAR_10, (VAR_9 - VAR_10) + 1);
        break;

      case 137:
        if (VAR_11 != VAR_2) {
          return VAR_9;
        }

        VAR_6->multipart_state = 130;
        break;

      case 138:
        if (VAR_11 == ' ') {
          break;
        }

        VAR_10 = VAR_9;
        VAR_6->multipart_state = 140;


      case 140:
        if (VAR_11 == VAR_0) {
          FUNC_1(VAR_4, VAR_7 + VAR_10, VAR_9 - VAR_10);
          VAR_6->multipart_state = 139;
        }
        if (VAR_13)
          FUNC_1(VAR_4, VAR_7 + VAR_10, (VAR_9 - VAR_10) + 1);
        break;

      case 139:
        if (VAR_11 != VAR_2) {
          return VAR_9;
        }
  VAR_1->number_of_multipart_headers++;
        VAR_6->multipart_state = 141;
        break;

      case 130:
        if (VAR_1->on_multipart_headers_complete)
    VAR_1->on_multipart_headers_complete(VAR_1);
        VAR_10 = VAR_9;
        VAR_6->multipart_state = 136;


      case 136:
        if (VAR_11 == VAR_0) {
          FUNC_0(VAR_5, VAR_7 + VAR_10, VAR_9 - VAR_10);
          VAR_10 = VAR_9;
          VAR_6->multipart_state = 135;
          VAR_6->multipart_lookbehind[0] = VAR_0;
          break;
        }
        if (VAR_13)
          FUNC_0(VAR_5, VAR_7 + VAR_10, (VAR_9 - VAR_10) + 1);
        break;

      case 135:
        if (VAR_11 == VAR_2) {
          VAR_6->multipart_state = 133;
          VAR_6->multipart_lookbehind[1] = VAR_2;
    VAR_1->number_of_multipart_headers = 0;
          VAR_6->multipart_index = 0;
          break;
        }
        FUNC_0(VAR_5, VAR_6->multipart_lookbehind, 1);
        VAR_6->multipart_state = 136;
        VAR_10 = VAR_9 --;
        break;

      case 133:
        if (VAR_1->multipart_boundary[VAR_6->multipart_index] != VAR_11) {
          FUNC_0(VAR_5, VAR_6->multipart_lookbehind, 2 + VAR_6->multipart_index);
          VAR_6->multipart_state = 136;
          VAR_10 = VAR_9 --;
          break;
        }
        VAR_6->multipart_lookbehind[2 + VAR_6->multipart_index] = VAR_11;
        if ((++ VAR_6->multipart_index) == VAR_1->multipart_boundary_len + 2) {
          if (VAR_1->on_part_data_complete)
      VAR_1->on_part_data_complete(VAR_1);
          VAR_6->multipart_state = 134;
        }
        break;

      case 134:
        if (VAR_11 == '-') {
          VAR_6->multipart_state = 131;
          break;
        }
        if (VAR_11 == VAR_0) {
          VAR_6->multipart_state = 132;
          break;
        }
        return VAR_9;

      case 131:
        if (VAR_11 == '-') {
          VAR_6->multipart_state = 143;
          break;
        }
        return VAR_9;

      case 132:
        if (VAR_11 == VAR_2) {
          VAR_6->multipart_state = 141;
          break;
        }
        return VAR_9;

      case 143:
        break;

      default:
        return 0;
    }
    ++VAR_9;
  }

  return VAR_8;
}
