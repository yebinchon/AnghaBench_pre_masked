
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ctlr_info_t ;
struct TYPE_5__ {int * data_byte; } ;
typedef TYPE_1__ InquiryData_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (char*,int *,size_t) ;
 int FUNC_4 (int *,int ,TYPE_1__*,int,int ,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_5(ctlr_info_t *VAR_7, int VAR_8, char *VAR_9,
 char *VAR_10, char *VAR_11)
{
 int VAR_12;
 InquiryData_struct *VAR_13;
 unsigned char VAR_14[8];

 *VAR_9 = '\0';
 *VAR_10 = '\0';
 *VAR_11 = '\0';

 VAR_13 = FUNC_1(sizeof(InquiryData_struct), VAR_1);
 if (!VAR_13)
  return;

 FUNC_2(VAR_7, VAR_14, VAR_8);
 VAR_12 = FUNC_4(VAR_7, VAR_0, VAR_13,
        sizeof(InquiryData_struct), 0,
    VAR_14, VAR_5);
 if (VAR_12 == VAR_2) {
  FUNC_3(VAR_9, &VAR_13->data_byte[8], VAR_6);
  VAR_9[VAR_6] = '\0';
  FUNC_3(VAR_10, &VAR_13->data_byte[16], VAR_3);
  VAR_10[VAR_3] = '\0';
  FUNC_3(VAR_11, &VAR_13->data_byte[32], VAR_4);
  VAR_11[VAR_4] = '\0';
 }

 FUNC_0(VAR_13);
 return;
}
