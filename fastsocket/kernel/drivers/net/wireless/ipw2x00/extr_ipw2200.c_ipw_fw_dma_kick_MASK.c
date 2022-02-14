
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t last_cb_index; int * cb_list; } ;
struct ipw_priv {TYPE_1__ sram_desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ipw_priv*,int ,int) ;
 int FUNC_2 (struct ipw_priv*,size_t,int *) ;
 int FUNC_3 (struct ipw_priv*,int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;

 FUNC_0(">> :\n");

 for (VAR_8 = 0; VAR_8 < VAR_6->sram_desc.last_cb_index; VAR_8++)
  FUNC_2(VAR_6, VAR_8,
            &VAR_6->sram_desc.cb_list[VAR_8]);


 FUNC_1(VAR_6, VAR_3,
        VAR_4 |
        VAR_5);


 VAR_7 = VAR_1 | VAR_0;
 FUNC_3(VAR_6, VAR_2, VAR_7);

 FUNC_0("<< :\n");
 return 0;
}
