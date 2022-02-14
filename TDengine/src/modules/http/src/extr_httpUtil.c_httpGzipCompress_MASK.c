
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uLong ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ avail_in; scalar_t__ total_out; scalar_t__ avail_out; int * next_out; int * next_in; } ;
struct TYPE_5__ {TYPE_3__ gzipStream; } ;
typedef TYPE_1__ HttpContext ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(HttpContext *VAR_4, char *VAR_5, int32_t VAR_6, char *VAR_7, int32_t *VAR_8, bool VAR_9) {
  int VAR_10 = 0;
  VAR_4->gzipStream.next_in = (Bytef *) VAR_5;
  VAR_4->gzipStream.avail_in = (uLong) VAR_6;
  VAR_4->gzipStream.next_out = (Bytef *) VAR_7;
  VAR_4->gzipStream.avail_out = (uLong) (*VAR_8);

  while (VAR_4->gzipStream.avail_in != 0 && VAR_4->gzipStream.total_out < (uLong) (*VAR_8)) {
    if (FUNC_0(&VAR_4->gzipStream, VAR_1) != VAR_2) {
      return -1;
    }
  }

  if (VAR_4->gzipStream.avail_in != 0) {
    return VAR_4->gzipStream.avail_in;
  }

  if (VAR_9) {
    for (;;) {
      if ((VAR_10 = FUNC_0(&VAR_4->gzipStream, VAR_0)) == VAR_3) {
        break;
      }
      if (VAR_10 != VAR_2) {
        return -2;
      }
    }

    if (FUNC_1(&VAR_4->gzipStream) != VAR_2) {
      return -3;
    }
  }

  *VAR_8 = (int32_t) (VAR_4->gzipStream.total_out);
  return 0;
}
