
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int reply_len; int * reply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct adb_request*,int *,int,int,int ,...) ;
 int FUNC_4 (unsigned char*,int *,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_2)
{
 struct adb_request VAR_3;
 unsigned char VAR_4[8];

 FUNC_5(" (trackpad)");

 FUNC_3(&VAR_3, ((void*)0), VAR_1 | VAR_0, 1,
      FUNC_1(VAR_2,1));
 if (VAR_3.reply_len < 8)
     FUNC_5("bad length for reg. 1\n");
 else
 {
     FUNC_4(VAR_4, &VAR_3.reply[1], 8);

     FUNC_3(&VAR_3, ((void*)0), VAR_1, 9,
         FUNC_2(VAR_2,1),
             VAR_4[0],
             VAR_4[1],
             VAR_4[2],
             VAR_4[3],
             VAR_4[4],
             VAR_4[5],
             0x0d,
             VAR_4[7]);

            FUNC_3(&VAR_3, ((void*)0), VAR_1, 9,
         FUNC_2(VAR_2,2),
          0x99,
          0x94,
          0x19,
          0xff,
          0xb2,
          0x8a,
          0x1b,
          0x50);

     FUNC_3(&VAR_3, ((void*)0), VAR_1, 9,
         FUNC_2(VAR_2,1),
             VAR_4[0],
             VAR_4[1],
             VAR_4[2],
             VAR_4[3],
             VAR_4[4],
             VAR_4[5],
             0x03,
             VAR_4[7]);


     FUNC_3(&VAR_3, ((void*)0), VAR_1, 1, FUNC_0(VAR_2));
        }
}
