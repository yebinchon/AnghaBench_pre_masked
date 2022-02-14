
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int order; } ;
struct TYPE_7__ {int numOfCols; int fieldsInfo; TYPE_1__ order; } ;
struct TYPE_6__ {TYPE_3__ cmd; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,char*,int) ;

__attribute__((used)) static int32_t FUNC_1(SSqlObj *VAR_4, int32_t VAR_5, int32_t VAR_6,
                                               int32_t VAR_7) {
  int32_t VAR_8 = 0;
  SSqlCmd *VAR_9 = &VAR_4->cmd;
  VAR_9->numOfCols = VAR_5;

  VAR_9->order.order = VAR_3;

  FUNC_0(&VAR_9->fieldsInfo, 0, VAR_1, "Field", VAR_0);
  VAR_8 += VAR_0;

  FUNC_0(&VAR_9->fieldsInfo, 1, VAR_1, "Type", VAR_6);
  VAR_8 += VAR_6;

  FUNC_0(&VAR_9->fieldsInfo, 2, VAR_2, "Length", sizeof(int32_t));
  VAR_8 += sizeof(int32_t);

  FUNC_0(&VAR_9->fieldsInfo, 3, VAR_1, "Note", VAR_7);
  VAR_8 += VAR_7;

  return VAR_8;
}
