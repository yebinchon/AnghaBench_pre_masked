
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;


 int FUNC_0 (int,int*) ;

__attribute__((used)) static void FUNC_1(int VAR_0, struct dev_mc_list *VAR_1,
          u_char *VAR_2)
{
    struct dev_mc_list *VAR_3;

    for (VAR_3 = VAR_1; VAR_3 && VAR_0-- > 0; VAR_3 = VAR_3->next) {
 u_int VAR_4 = FUNC_0(6, VAR_3->dmi_addr);

 if ((VAR_3->dmi_addr[0] & 1) == 0)
     continue;

 VAR_2[VAR_4 >> 29] |= 1 << ((VAR_4 >> 26) & 7);
    }
}
