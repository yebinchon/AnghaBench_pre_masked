
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {scalar_t__ type; size_t data1; size_t data2; } ;
typedef TYPE_1__ pmi_message_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_1 (char*,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(pmi_message_t VAR_2)
{
 u8 VAR_3, VAR_4;

 FUNC_0(VAR_2.type != VAR_0);

 VAR_3 = VAR_2.data1;
 VAR_4 = VAR_2.data2;

 VAR_1[VAR_3] = VAR_4;

 FUNC_1("cbe_handle_pmi: node: %d max_freq: %d\n", VAR_3, VAR_4);
}
