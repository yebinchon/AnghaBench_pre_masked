
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_3__ {unsigned int start; unsigned int end; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (void*,unsigned int,unsigned int) ;
 int FUNC_2 (size_t,int ,void*,unsigned long,unsigned int) ;

__attribute__((used)) static unsigned FUNC_3(u8 VAR_1, u16 VAR_2, void *VAR_3,
        unsigned long VAR_4, unsigned VAR_5)
{
 unsigned int VAR_6;


 if (VAR_1 >= FUNC_0(VAR_0) || !VAR_0[VAR_1].start)
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6 = VAR_0[VAR_1].end - VAR_0[VAR_1].start;


 if (VAR_5 < VAR_6)
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);


 FUNC_1(VAR_3, VAR_0[VAR_1].start, VAR_6);
 return VAR_6;
}
