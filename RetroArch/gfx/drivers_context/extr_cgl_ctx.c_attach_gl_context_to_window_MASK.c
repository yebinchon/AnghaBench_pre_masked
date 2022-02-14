
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLint ;
typedef scalar_t__ Float64 ;
typedef int CGSWindowID ;
typedef int CGSSurfaceID ;
typedef int CGSConnectionID ;
typedef int CGLContextObj ;
typedef int CFNumberRef ;
typedef scalar_t__ CFDictionaryRef ;
typedef int CFArrayRef ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int*) ;
 scalar_t__ FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int,int,int*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int,int,int,int,int ) ;
 scalar_t__ FUNC_11 (int,int,int,int ) ;
 int FUNC_12 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static CGSSurfaceID FUNC_14(CGLContextObj VAR_5,
   CGSWindowID VAR_6, int *VAR_7, int *VAR_8)
{
    CFArrayRef VAR_9;
    CFDictionaryRef VAR_10, VAR_11;
    GLint VAR_12 = 0;
    Float64 VAR_13 = 0, VAR_14 = 0;
    CGSSurfaceID VAR_15 = 0;
    CGSConnectionID VAR_16 = FUNC_9();

    FUNC_13("cid:%d wid:%d\n", VAR_16, VAR_6);




    VAR_9 = FUNC_12(VAR_4, VAR_6);
    VAR_10 = (CFDictionaryRef)FUNC_0(VAR_9, 0);
    VAR_11 = (CFDictionaryRef)FUNC_1(VAR_10, VAR_3);
    FUNC_2((CFNumberRef)FUNC_1((CFDictionaryRef)VAR_11, FUNC_4("Width")),
       VAR_0, &VAR_13);
    FUNC_2((CFNumberRef)FUNC_1(VAR_11, FUNC_4("Height")),
       VAR_0, &VAR_14);
    FUNC_3(VAR_9);


    if(FUNC_8(VAR_16, VAR_6, &VAR_15) != VAR_1)
    {
       FUNC_13("ERR: no surface\n");
    }
    FUNC_13("sid:%d\n", VAR_15);


    if(FUNC_11(VAR_16, VAR_6, VAR_15, FUNC_7(0, 0, VAR_13, VAR_14)) != VAR_1)
       FUNC_13("ERR: cant set bounds\n");
    if(FUNC_10(VAR_16, VAR_6, VAR_15, 1, 0) != VAR_1)
       FUNC_13("ERR: cant order front\n");


    if(FUNC_6(VAR_5, VAR_16, VAR_6, VAR_15) != VAR_1)
    {
       FUNC_13("ERR: cant set surface\n");
    }


    FUNC_5(VAR_5, VAR_2, &VAR_12);
    if(VAR_12 != 1)
    {
       FUNC_13("ERR: no drawable\n");
    }

    *VAR_7 = (int)VAR_13;
    *VAR_8 = (int)VAR_14;

    return VAR_15;
}
