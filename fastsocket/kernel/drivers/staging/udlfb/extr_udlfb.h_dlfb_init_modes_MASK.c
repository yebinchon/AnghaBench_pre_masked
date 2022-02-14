
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xres; int yres; int unknown3; int unknown2; int unknown1; int vclock; int hclock; scalar_t__ col; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_0[0].col = 0;
 FUNC_0(&VAR_0[0].hclock, "\x20\x3C\x7A\xC9", 4);
 FUNC_0(&VAR_0[0].vclock, "\xF2\x6C\x48\xF9", 4);
 FUNC_0(&VAR_0[0].unknown1, "\x70\x53\xFF\xFF\x21\x27", 6);
 VAR_0[0].xres = 800;
 FUNC_0(&VAR_0[0].unknown2, "\x91\xF3\xFF\xFF\xFF\xF9", 6);
 VAR_0[0].yres = 480;
 FUNC_0(&VAR_0[0].unknown3, "\x01\x02\xC8\x19", 4);

 VAR_0[1].col = 0;
 FUNC_0(&VAR_0[1].hclock, "\x36\x18\xD5\x10", 4);
 FUNC_0(&VAR_0[1].vclock, "\x60\xA9\x7B\x33", 4);
 FUNC_0(&VAR_0[1].unknown1, "\xA1\x2B\x27\x32\xFF\xFF", 6);
 VAR_0[1].xres = 1024;
 FUNC_0(&VAR_0[1].unknown2, "\xD9\x9A\xFF\xCA\xFF\xFF", 6);
 VAR_0[1].yres = 768;
 FUNC_0(&VAR_0[1].unknown3, "\x04\x03\xC8\x32", 4);

 VAR_0[2].col = 0;
 FUNC_0(&VAR_0[2].hclock, "\x98\xF8\x0D\x57", 4);
 FUNC_0(&VAR_0[2].vclock, "\x2A\x55\x4D\x54", 4);
 FUNC_0(&VAR_0[2].unknown1, "\xCA\x0D\xFF\xFF\x94\x43", 6);
 VAR_0[2].xres = 1280;
 FUNC_0(&VAR_0[2].unknown2, "\x9A\xA8\xFF\xFF\xFF\xF9", 6);
 VAR_0[2].yres = 1024;
 FUNC_0(&VAR_0[2].unknown3, "\x04\x02\x60\x54", 4);

 VAR_0[3].col = 0;
 FUNC_0(&VAR_0[3].hclock, "\x42\x24\x38\x36", 4);
 FUNC_0(&VAR_0[3].vclock, "\xC1\x52\xD9\x29", 4);
 FUNC_0(&VAR_0[3].unknown1, "\xEA\xB8\x32\x60\xFF\xFF", 6);
 VAR_0[3].xres = 1400;
 FUNC_0(&VAR_0[3].unknown2, "\xC9\x4E\xFF\xFF\xFF\xF2", 6);
 VAR_0[3].yres = 1050;
 FUNC_0(&VAR_0[3].unknown3, "\x04\x02\x1E\x5F", 4);
}
