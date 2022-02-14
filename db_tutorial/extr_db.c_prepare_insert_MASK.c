
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * buffer; } ;
struct TYPE_6__ {int id; int email; int username; } ;
struct TYPE_7__ {TYPE_1__ row_to_insert; int type; } ;
typedef TYPE_2__ Statement ;
typedef int PrepareResult ;
typedef TYPE_3__ InputBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*) ;

PrepareResult FUNC_4(InputBuffer* VAR_7, Statement* VAR_8) {
  VAR_8->type = VAR_6;

  char* VAR_9 = FUNC_3(VAR_7->buffer, " ");
  char* VAR_10 = FUNC_3(((void*)0), " ");
  char* VAR_11 = FUNC_3(((void*)0), " ");
  char* VAR_12 = FUNC_3(((void*)0), " ");

  if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == ((void*)0)) {
    return VAR_5;
  }

  int VAR_13 = FUNC_0(VAR_10);
  if (VAR_13 < 0) {
    return VAR_2;
  }
  if (FUNC_2(VAR_11) > VAR_1) {
    return VAR_3;
  }
  if (FUNC_2(VAR_12) > VAR_0) {
    return VAR_3;
  }

  VAR_8->row_to_insert.id = VAR_13;
  FUNC_1(VAR_8->row_to_insert.username, VAR_11);
  FUNC_1(VAR_8->row_to_insert.email, VAR_12);

  return VAR_4;
}
