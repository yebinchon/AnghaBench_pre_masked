
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int string_type ;
typedef int size_type ;
typedef int point_type ;
struct TYPE_5__ {char const* property; int type; } ;
typedef TYPE_1__ param_dispatch_t ;
typedef int number_type ;
typedef int int_type ;
struct TYPE_6__ {int written; int len; char* data; scalar_t__ on_release; } ;
typedef TYPE_2__ ebb_buf ;
typedef int bool_type ;
typedef int blob_type ;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,int,char*,size_t) ;
 int FUNC_3 (char const*) ;

ebb_buf FUNC_4(const param_dispatch_t* VAR_1, size_t VAR_2, const char* VAR_3)
{
 ebb_buf VAR_4;
 int VAR_5;
 static const char VAR_6[] = "integer";
 static const char VAR_7[] = "boolean";
 static const char VAR_8[] = "number";
 static const char VAR_9[] = "size";
 static const char VAR_10[] = "point";
 static const char VAR_11[] = "string";
 static const char VAR_12[] = "blob";
 size_t VAR_13 = 12;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  VAR_13 += FUNC_3(VAR_1[VAR_5].property) + 6;
  switch (VAR_1[VAR_5].type)
  {
   case 131:
   case 132:
    VAR_13 += sizeof(VAR_6) - 1;
    break;
   case 133:
   case 134:
    VAR_13 += sizeof(VAR_8) - 1;
    break;
   case 135:
    VAR_13 += sizeof(VAR_7) - 1;
    break;
   case 130:
    VAR_13 += sizeof(VAR_10) - 1;
    break;
   case 129:
    VAR_13 += sizeof(VAR_9) - 1;
    break;
   case 128:
    VAR_13 += sizeof(VAR_11) - 1;
    break;
   case 137:
   case 136:
    VAR_13 += sizeof(VAR_12) - 1;
    break;
  }
 }
 if (VAR_3)
  VAR_13 += 12 + FUNC_3(VAR_3);
 VAR_13 += 1;
 char* VAR_14 = (char*)FUNC_0(192 + VAR_13);
 FUNC_2(VAR_14, 192, VAR_0, VAR_13);
 VAR_4.written = FUNC_3(VAR_14);
 FUNC_1(VAR_14 + VAR_4.written, "{\"request\":{", 12);
 VAR_4.written += 12 + 1;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  VAR_14[VAR_4.written - 1] = '"';
  size_t VAR_15 = FUNC_3(VAR_1[VAR_5].property);
  FUNC_1(VAR_14 + VAR_4.written, VAR_1[VAR_5].property, VAR_15);
  VAR_4.written += VAR_15 + 3;
  VAR_14[VAR_4.written - 3] = '"';
  VAR_14[VAR_4.written - 2] = ':';
  VAR_14[VAR_4.written - 1] = '"';
  switch (VAR_1[VAR_5].type)
  {
   case 131:
   case 132:
    FUNC_1(VAR_14 + VAR_4.written, VAR_6, sizeof(VAR_6) - 1);
    VAR_4.written += sizeof(VAR_6) + 2;
    break;
   case 133:
   case 134:
    FUNC_1(VAR_14 + VAR_4.written, VAR_8, sizeof(VAR_8) - 1);
    VAR_4.written += sizeof(VAR_8) + 2;
    break;
   case 135:
    FUNC_1(VAR_14 + VAR_4.written, VAR_7, sizeof(VAR_7) - 1);
    VAR_4.written += sizeof(VAR_7) + 2;
    break;
   case 130:
    FUNC_1(VAR_14 + VAR_4.written, VAR_10, sizeof(VAR_10) - 1);
    VAR_4.written += sizeof(VAR_10) + 2;
    break;
   case 129:
    FUNC_1(VAR_14 + VAR_4.written, VAR_9, sizeof(VAR_9) - 1);
    VAR_4.written += sizeof(VAR_9) + 2;
    break;
   case 128:
    FUNC_1(VAR_14 + VAR_4.written, VAR_11, sizeof(VAR_11) - 1);
    VAR_4.written += sizeof(VAR_11) + 2;
    break;
   case 137:
   case 136:
    FUNC_1(VAR_14 + VAR_4.written, VAR_12, sizeof(VAR_12) - 1);
    VAR_4.written += sizeof(VAR_12) + 2;
    break;
  }
  VAR_14[VAR_4.written - 3] = '"';
  VAR_14[VAR_4.written - 2] = (VAR_5 == VAR_2 - 1) ? '}' : ',';
 }
 if (VAR_3)
 {
  FUNC_1(VAR_14 + VAR_4.written - 1, ",\"response\":", 12);
  VAR_4.written += 11;
  size_t VAR_16 = FUNC_3(VAR_3);
  FUNC_1(VAR_14 + VAR_4.written, VAR_3, VAR_16);
  VAR_4.written += VAR_16 + 1;
 }
 VAR_14[VAR_4.written - 1] = '}';
 VAR_14[VAR_4.written] = '\n';
 VAR_4.len = VAR_4.written + 1;
 VAR_4.data = VAR_14;
 VAR_4.on_release = 0;
 return VAR_4;
}
