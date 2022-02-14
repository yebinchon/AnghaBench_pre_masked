
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dz_port {struct dz_mux* mux; } ;
struct dz_mux {int initialised; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dz_port*,int ) ;
 int FUNC_1 (struct dz_port*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct dz_port *VAR_3)
{
 struct dz_mux *VAR_4 = VAR_3->mux;

 if (VAR_4->initialised)
  return;

 FUNC_1(VAR_3, VAR_1, VAR_0);
 while (FUNC_0(VAR_3, VAR_1) & VAR_0);
 FUNC_2();


 FUNC_1(VAR_3, VAR_1, VAR_2);

 VAR_4->initialised = 1;
}
