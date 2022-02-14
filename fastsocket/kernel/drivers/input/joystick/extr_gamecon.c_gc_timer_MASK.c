
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc {int timer; scalar_t__* pads; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct gc*) ;
 int FUNC_1 (struct gc*) ;
 int FUNC_2 (struct gc*) ;
 int FUNC_3 (struct gc*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_10)
{
 struct gc *VAR_11 = (void *) VAR_10;





 if (VAR_11->pads[VAR_3])
  FUNC_1(VAR_11);





 if (VAR_11->pads[VAR_4] || VAR_11->pads[VAR_7] || VAR_11->pads[VAR_8])
  FUNC_2(VAR_11);





 if (VAR_11->pads[VAR_1] || VAR_11->pads[VAR_2])
  FUNC_0(VAR_11);





 if (VAR_11->pads[VAR_5] || VAR_11->pads[VAR_0])
  FUNC_3(VAR_11);

 FUNC_4(&VAR_11->timer, VAR_9 + VAR_6);
}
