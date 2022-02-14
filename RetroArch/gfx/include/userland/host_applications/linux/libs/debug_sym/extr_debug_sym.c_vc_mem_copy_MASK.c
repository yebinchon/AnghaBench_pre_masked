
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct fb_dmacopy {void* length; void* src; void* dst; } ;


 int FUNC_0 (char*,char const*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ,struct fb_dmacopy*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    const char *VAR_7 = "/dev/fb0";
    int VAR_8;
    struct fb_dmacopy VAR_9;

    VAR_9.dst = VAR_4;
    VAR_9.src = VAR_5;
    VAR_9.length = VAR_6;

    if (( VAR_8 = FUNC_3( VAR_7, VAR_1 | VAR_2 )) < 0 )
    {
        FUNC_0( "Unable to open '%s': %s(%d)\n", VAR_7, FUNC_4( VAR_3 ), VAR_3 );
        return -VAR_3;
    }

    if ( FUNC_2( VAR_8, VAR_0, &VAR_9 ) != 0 )
    {
        FUNC_0( "Failed to get memory size via ioctl: %s(%d)\n",
            FUNC_4( VAR_3 ), VAR_3 );
        FUNC_1( VAR_8 );
        return -VAR_3;
    }
    FUNC_1( VAR_8 );
    return 0;
}
