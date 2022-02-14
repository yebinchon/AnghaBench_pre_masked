
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int decoder_tid; int queue; } ;
typedef TYPE_1__ Decoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int (*) (void*),char const*,void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(Decoder *VAR_2, int (*VAR_3)(void *), const char *VAR_4, void* VAR_5)
{
    FUNC_4(VAR_2->queue);
    VAR_2->decoder_tid = FUNC_1(VAR_3, VAR_4, VAR_5);
    if (!VAR_2->decoder_tid) {
        FUNC_3(((void*)0), VAR_0, "SDL_CreateThread(): %s\n", FUNC_2());
        return FUNC_0(VAR_1);
    }
    return 0;
}
