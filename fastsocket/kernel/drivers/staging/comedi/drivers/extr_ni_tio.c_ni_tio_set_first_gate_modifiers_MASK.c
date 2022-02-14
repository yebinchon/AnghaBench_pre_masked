
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ni_gpct*,int ,unsigned int const,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ni_gpct *VAR_6,
         unsigned int VAR_7)
{
 const unsigned VAR_8 = VAR_2 | VAR_3;
 unsigned VAR_9 = 0;

 if (VAR_7 & VAR_1) {
  VAR_9 |= VAR_2;
 }
 if (VAR_7 & VAR_0) {
  VAR_9 |= VAR_5;
 } else {
  VAR_9 |= VAR_4;
 }
 FUNC_1(VAR_6, FUNC_0(VAR_6->counter_index),
   VAR_8, VAR_9);
}
