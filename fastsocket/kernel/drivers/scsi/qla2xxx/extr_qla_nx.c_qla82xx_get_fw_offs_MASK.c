
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct qla_hw_data {scalar_t__ fw_type; TYPE_2__* hablob; } ;
struct qla82xx_uri_data_desc {int findex; } ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct TYPE_3__ {int * data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 struct qla82xx_uri_data_desc* FUNC_1 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static u8 *
FUNC_2(struct qla_hw_data *VAR_4)
{
 u32 VAR_5 = VAR_0;
 struct qla82xx_uri_data_desc *VAR_6 = ((void*)0);

 if (VAR_4->fw_type == VAR_1) {
  VAR_6 = FUNC_1(VAR_4, VAR_2,
   VAR_3);
  if (VAR_6)
   VAR_5 = FUNC_0(VAR_6->findex);
 }

 return (u8 *)&VAR_4->hablob->fw->data[VAR_5];
}
