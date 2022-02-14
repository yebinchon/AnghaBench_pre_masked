
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

unsigned FUNC_1(unsigned VAR_0, unsigned VAR_1)
{
        unsigned VAR_2=0, VAR_3, VAR_4;




        for (VAR_3 = 1U<<31; VAR_3 != 0; VAR_3 >>= 1) {
                if (FUNC_0(VAR_0, VAR_2|VAR_3) < VAR_1)
   VAR_2 |= VAR_3;
        }
        VAR_4 = VAR_0 * (VAR_2+1);
        if (VAR_4 <= VAR_0/2)
  VAR_2++;
        return VAR_2;
}
