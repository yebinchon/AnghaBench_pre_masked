
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int const mx; int const my; size_t ref; } ;
struct TYPE_7__ {int ref_frames; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ BlockNode ;


 int** VAR_0 ;
 int FUNC_0 (int const,int const,int const) ;

__attribute__((used)) static inline void FUNC_1(SnowContext *VAR_1, int *VAR_2, int *VAR_3, int VAR_4,
                           const BlockNode *VAR_5, const BlockNode *VAR_6, const BlockNode *VAR_7){
    if(VAR_1->ref_frames == 1){
        *VAR_2 = FUNC_0(VAR_5->mx, VAR_6->mx, VAR_7->mx);
        *VAR_3 = FUNC_0(VAR_5->my, VAR_6->my, VAR_7->my);
    }else{
        const int *VAR_8 = VAR_0[VAR_4];
        *VAR_2 = FUNC_0((VAR_5->mx * VAR_8[VAR_5->ref] + 128) >>8,
                       (VAR_6 ->mx * VAR_8[VAR_6 ->ref] + 128) >>8,
                       (VAR_7 ->mx * VAR_8[VAR_7 ->ref] + 128) >>8);
        *VAR_3 = FUNC_0((VAR_5->my * VAR_8[VAR_5->ref] + 128) >>8,
                       (VAR_6 ->my * VAR_8[VAR_6 ->ref] + 128) >>8,
                       (VAR_7 ->my * VAR_8[VAR_7 ->ref] + 128) >>8);
    }
}
