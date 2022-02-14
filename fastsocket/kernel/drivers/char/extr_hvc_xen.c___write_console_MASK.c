
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_interface {int out_cons; int out_prod; char* out; } ;
typedef int XENCONS_RING_IDX ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct xencons_interface* FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, int VAR_1)
{
 struct xencons_interface *VAR_2 = FUNC_5();
 XENCONS_RING_IDX VAR_3, VAR_4;
 int VAR_5 = 0;

 VAR_3 = VAR_2->out_cons;
 VAR_4 = VAR_2->out_prod;
 FUNC_2();
 FUNC_0((VAR_4 - VAR_3) > sizeof(VAR_2->out));

 while ((VAR_5 < VAR_1) && ((VAR_4 - VAR_3) < sizeof(VAR_2->out)))
  VAR_2->out[FUNC_1(VAR_4++, VAR_2->out)] = VAR_0[VAR_5++];

 FUNC_4();
 VAR_2->out_prod = VAR_4;

 if (VAR_5)
  FUNC_3();
 return VAR_5;
}
