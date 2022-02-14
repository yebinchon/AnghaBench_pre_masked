
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111 {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct sa1111 *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_0(VAR_2->base + VAR_0);

 VAR_4 = (VAR_3 & 0x007f) + 2;
 VAR_5 = ((VAR_3 & 0x0f80) >> 7) + 2;
 VAR_6 = VAR_1[(VAR_3 & 0x3000) >> 12];

 return 3686400 * VAR_4 / (VAR_5 * VAR_6);
}
