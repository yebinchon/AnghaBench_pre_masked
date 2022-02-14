
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wl_shm_pool {int dummy; } ;
struct TYPE_9__ {int width; int height; int xhot; int yhot; int buffer; } ;
struct TYPE_10__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWcursor ;
struct TYPE_8__ {int shm; } ;
struct TYPE_12__ {TYPE_1__ wl; } ;
struct TYPE_11__ {int width; int height; scalar_t__ pixels; } ;
typedef TYPE_4__ GLFWimage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int *,int,int,int ,int,int ) ;
 int FUNC_4 (void*,int) ;
 struct wl_shm_pool* FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct wl_shm_pool*,int ,int,int,int,int ) ;
 int FUNC_7 (struct wl_shm_pool*) ;

int FUNC_8(_GLFWcursor* VAR_9,
                              const GLFWimage* VAR_10,
                              int VAR_11, int VAR_12)
{
    struct wl_shm_pool* VAR_13;
    int VAR_14 = VAR_10->width * 4;
    int VAR_15 = VAR_10->width * VAR_10->height * 4;
    void* VAR_16;
    int VAR_17, VAR_18;

    VAR_17 = FUNC_2(VAR_15);
    if (VAR_17 < 0)
    {
        FUNC_0(VAR_0,
                        "Wayland: Creating a buffer file for %d B failed: %m\n",
                        VAR_15);
        return VAR_1;
    }

    VAR_16 = FUNC_3(((void*)0), VAR_15, VAR_5 | VAR_6, VAR_4, VAR_17, 0);
    if (VAR_16 == VAR_3)
    {
        FUNC_0(VAR_0,
                        "Wayland: Cursor mmap failed: %m\n");
        FUNC_1(VAR_17);
        return VAR_1;
    }

    VAR_13 = FUNC_5(VAR_8.wl.shm, VAR_17, VAR_15);

    FUNC_1(VAR_17);
    unsigned char* VAR_19 = (unsigned char*) VAR_10->pixels;
    unsigned char* VAR_20 = VAR_16;
    for (VAR_18 = 0; VAR_18 < VAR_10->width * VAR_10->height; VAR_18++, VAR_19 += 4)
    {
        *VAR_20++ = VAR_19[2];
        *VAR_20++ = VAR_19[1];
        *VAR_20++ = VAR_19[0];
        *VAR_20++ = VAR_19[3];
    }

    VAR_9->wl.buffer =
        FUNC_6(VAR_13, 0,
                                  VAR_10->width,
                                  VAR_10->height,
                                  VAR_14, VAR_7);
    FUNC_4(VAR_16, VAR_15);
    FUNC_7(VAR_13);

    VAR_9->wl.width = VAR_10->width;
    VAR_9->wl.height = VAR_10->height;
    VAR_9->wl.xhot = VAR_11;
    VAR_9->wl.yhot = VAR_12;
    return VAR_2;
}
