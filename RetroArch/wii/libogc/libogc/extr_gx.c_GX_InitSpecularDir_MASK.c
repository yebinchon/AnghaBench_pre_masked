
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __gx_litobj {float px; float py; float pz; float nx; float ny; float nz; } ;
typedef float f32 ;
typedef int GXLightObj ;


 float VAR_0 ;
 float FUNC_0 (float) ;

void FUNC_1(GXLightObj *VAR_1,f32 VAR_2,f32 VAR_3,f32 VAR_4)
{
    f32 VAR_5, VAR_6, VAR_7;
    f32 VAR_8, VAR_9, VAR_10, VAR_11;
 struct __gx_litobj *VAR_12 = (struct __gx_litobj*)VAR_1;


    VAR_8 = -VAR_2;
    VAR_9 = -VAR_3;
    VAR_10 = (-VAR_4 + 1.0f);
 VAR_11 = ((VAR_8 * VAR_8) + (VAR_9 * VAR_9) + (VAR_10 * VAR_10));
 if(VAR_11!=0.0f) VAR_11 = 1.0f / FUNC_0(VAR_11);

    VAR_8 *= VAR_11;
    VAR_9 *= VAR_11;
    VAR_10 *= VAR_11;

    VAR_5 = (VAR_2 * VAR_0);
    VAR_6 = (VAR_3 * VAR_0);
    VAR_7 = (VAR_4 * VAR_0);

 VAR_12->px = VAR_5;
 VAR_12->py = VAR_6;
 VAR_12->pz = VAR_7;
 VAR_12->nx = VAR_8;
 VAR_12->ny = VAR_9;
 VAR_12->nz = VAR_10;
}
