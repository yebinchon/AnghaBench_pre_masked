
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Uint32 ;
typedef int SDL_Texture ;
typedef int SDL_BlendMode ;


 int VAR_0 ;
 int * FUNC_0 (int ,scalar_t__,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,void**,int*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*,int*,int*,int*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*,int,int,int ) ;
 int FUNC_8 (void*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(SDL_Texture **VAR_3, Uint32 VAR_4, int VAR_5, int VAR_6, SDL_BlendMode VAR_7, int VAR_8)
{
    Uint32 VAR_9;
    int VAR_10, VAR_11, VAR_12;
    if (!*VAR_3 || FUNC_4(*VAR_3, &VAR_9, &VAR_10, &VAR_11, &VAR_12) < 0 || VAR_5 != VAR_11 || VAR_6 != VAR_12 || VAR_4 != VAR_9) {
        void *VAR_13;
        int VAR_14;
        if (*VAR_3)
            FUNC_1(*VAR_3);
        if (!(*VAR_3 = FUNC_0(VAR_2, VAR_4, VAR_1, VAR_5, VAR_6)))
            return -1;
        if (FUNC_5(*VAR_3, VAR_7) < 0)
            return -1;
        if (VAR_8) {
            if (FUNC_3(*VAR_3, ((void*)0), &VAR_13, &VAR_14) < 0)
                return -1;
            FUNC_8(VAR_13, 0, VAR_14 * VAR_6);
            FUNC_6(*VAR_3);
        }
        FUNC_7(((void*)0), VAR_0, "Created %dx%d texture with %s.\n", VAR_5, VAR_6, FUNC_2(VAR_4));
    }
    return 0;
}
