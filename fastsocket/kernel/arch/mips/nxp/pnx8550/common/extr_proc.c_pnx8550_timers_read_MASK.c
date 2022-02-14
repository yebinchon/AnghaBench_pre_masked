
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char*,...) ;

__attribute__((used)) static int FUNC_8(char* VAR_0, char** VAR_1, off_t VAR_2, int VAR_3, int* VAR_4, void* VAR_5)
{
        int VAR_6 = 0;
 int VAR_7 = FUNC_3();

        if (VAR_2==0) {
  VAR_6 += FUNC_7(&VAR_0[VAR_6], "Timer:       count,  compare, tc, status\n");
                VAR_6 += FUNC_7(&VAR_0[VAR_6], "    1: %11i, %8i,  %1i, %s\n",
          FUNC_4(), FUNC_0(),
         (VAR_7>>6)&0x1, ((VAR_7>>3)&0x1)? "off":"on");
                VAR_6 += FUNC_7(&VAR_0[VAR_6], "    2: %11i, %8i,  %1i, %s\n",
          FUNC_5(), FUNC_1(),
         (VAR_7>>7)&0x1, ((VAR_7>>4)&0x1)? "off":"on");
                VAR_6 += FUNC_7(&VAR_0[VAR_6], "    3: %11i, %8i,  %1i, %s\n",
          FUNC_6(), FUNC_2(),
         (VAR_7>>8)&0x1, ((VAR_7>>5)&0x1)? "off":"on");
        }

        return VAR_6;
}
