
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int gs_asid_gen; int gs_gid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct gru_state *VAR_3)
{
 FUNC_1(VAR_2, "gid %d\n", VAR_3->gs_gid);
 FUNC_0(VAR_1);
 VAR_3->gs_asid_gen++;
 return VAR_0;
}
