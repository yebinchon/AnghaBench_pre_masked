
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcbit_dev {struct pcbit_chan* b2; struct pcbit_chan* b1; } ;
struct pcbit_chan {int dummy; } ;


 int VAR_0 ;
 struct pcbit_dev** VAR_1 ;

__attribute__((used)) static __inline__ struct pcbit_dev * FUNC_0(struct pcbit_chan * VAR_2)
{
        struct pcbit_dev * VAR_3;
        int VAR_4;


        for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
                if ((VAR_3=VAR_1[VAR_4]))
                        if (VAR_3->b1 == VAR_2 || VAR_3->b2 == VAR_2)
                                return VAR_3;
        return ((void*)0);

}
