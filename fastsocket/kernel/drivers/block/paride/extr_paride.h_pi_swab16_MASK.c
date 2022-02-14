
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0( char *VAR_0, int VAR_1)

{ union { u16 u; char t[2]; } VAR_2;

 VAR_2.t[0]=VAR_0[2*VAR_1+1]; VAR_2.t[1]=VAR_0[2*VAR_1];
        return VAR_2.u;
}
