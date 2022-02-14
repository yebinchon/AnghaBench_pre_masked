
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (char*,int ) ;
 void* FUNC_1 (void*,char*) ;
 int FUNC_2 (char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static bool FUNC_3()
{



    static bool VAR_4;
    bool VAR_5 = 0;

    if (VAR_2)
       return 1;

    if (! VAR_2) {

        void *VAR_6 = FUNC_0("libvcsm.so", VAR_0);

        if (!VAR_6)
           VAR_6 = FUNC_0("/opt/vc/lib/libvcsm.so", VAR_0);

        if (VAR_6)
        {
           VAR_2 = FUNC_1(VAR_6, "vcsm_malloc_cache");
           VAR_3 = FUNC_1(VAR_6, "vcsm_vc_hdl_from_hdl");
           VAR_1 = FUNC_1(VAR_6, "vcsm_free");

           if (VAR_2 && VAR_3 && VAR_1)
           {
              VAR_5 = 1;
           }
           else
           {
              VAR_2 = ((void*)0);
              VAR_3 = ((void*)0);
              VAR_1 = ((void*)0);
           }
        }
    }
    if (! VAR_5 && ! VAR_4)
    {
        FUNC_2("Unable to load libvcsm.so for target EGL_IMAGE_BRCM_VCSM");
        VAR_4 = 0;
    }
    return VAR_5;

}
