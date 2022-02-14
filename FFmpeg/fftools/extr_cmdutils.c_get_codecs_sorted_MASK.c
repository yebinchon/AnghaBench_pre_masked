
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVCodecDescriptor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int ** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (int const*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int const**,unsigned int,int,int ) ;

__attribute__((used)) static unsigned FUNC_6(const AVCodecDescriptor ***VAR_2)
{
    const AVCodecDescriptor *VAR_3 = ((void*)0);
    const AVCodecDescriptor **VAR_4;
    unsigned VAR_5 = 0, VAR_6 = 0;

    while ((VAR_3 = FUNC_3(VAR_3)))
        VAR_5++;
    if (!(VAR_4 = FUNC_1(VAR_5, sizeof(*VAR_4)))) {
        FUNC_2(((void*)0), VAR_0, "Out of memory\n");
        FUNC_4(1);
    }
    VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_3(VAR_3)))
        VAR_4[VAR_6++] = VAR_3;
    FUNC_0(VAR_6 == VAR_5);
    FUNC_5(VAR_4, VAR_5, sizeof(*VAR_4), VAR_1);
    *VAR_2 = VAR_4;
    return VAR_5;
}
