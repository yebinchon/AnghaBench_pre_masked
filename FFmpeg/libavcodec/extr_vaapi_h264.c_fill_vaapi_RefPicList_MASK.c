
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VAPictureH264 ;
struct TYPE_3__ {scalar_t__ reference; int parent; } ;
typedef TYPE_1__ H264Ref ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(VAPictureH264 VAR_0[32],
                                  const H264Ref *VAR_1,
                                  unsigned int VAR_2)
{
    unsigned int VAR_3, VAR_4 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        if (VAR_1[VAR_3].reference)
            FUNC_0(&VAR_0[VAR_4++], VAR_1[VAR_3].parent,
                           VAR_1[VAR_3].reference);

    for (; VAR_4 < 32; VAR_4++)
        FUNC_1(&VAR_0[VAR_4]);
}
