
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 struct mm_struct** VAR_1 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (char*,unsigned int,struct mm_struct*) ;
 int FUNC_3 () ;
 int * VAR_2 ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_3)
{
 struct mm_struct *VAR_4;
 int VAR_5 = FUNC_3();


 VAR_4 = VAR_1[VAR_3];

 FUNC_2(" | steal %d from 0x%p", VAR_3, VAR_4);


 FUNC_1(VAR_4);


 VAR_4->context.id = VAR_0;


 FUNC_0(VAR_3, VAR_2[VAR_5]);

 return VAR_3;
}
