
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct representation {int dummy; } ;
struct TYPE_3__ {int n_videos; struct representation** videos; } ;
typedef TYPE_1__ DASHContext ;


 int FUNC_0 (struct representation***) ;
 int FUNC_1 (struct representation*) ;

__attribute__((used)) static void FUNC_2(DASHContext *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->n_videos; VAR_1++) {
        struct representation *VAR_2 = VAR_0->videos[VAR_1];
        FUNC_1(VAR_2);
    }
    FUNC_0(&VAR_0->videos);
    VAR_0->n_videos = 0;
}
