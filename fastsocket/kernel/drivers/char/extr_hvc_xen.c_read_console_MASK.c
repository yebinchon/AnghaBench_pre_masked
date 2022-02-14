
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xencons_interface {int in_cons; int in_prod; char* in; } ;
typedef int XENCONS_RING_IDX ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct xencons_interface* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_0, char *VAR_1, int VAR_2)
{
 struct xencons_interface *VAR_3 = FUNC_4();
 XENCONS_RING_IDX VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_4 = VAR_3->in_cons;
 VAR_5 = VAR_3->in_prod;
 FUNC_2();
 FUNC_0((VAR_5 - VAR_4) > sizeof(VAR_3->in));

 while (VAR_4 != VAR_5 && VAR_6 < VAR_2)
  VAR_1[VAR_6++] = VAR_3->in[FUNC_1(VAR_4++, VAR_3->in)];

 FUNC_2();
 VAR_3->in_cons = VAR_4;

 FUNC_3();
 return VAR_6;
}
