
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tty_struct {int dummy; } ;
struct TYPE_5__ {int tail; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct tty_struct*) ;
 int FUNC_15 (struct tty_struct*,unsigned char*,size_t) ;
 int FUNC_16 (struct tty_struct*) ;

__attribute__((used)) static int
FUNC_17(void *VAR_8)
{
 uint32_t VAR_9 = 0, VAR_10 = 0;

 while (!FUNC_8()) {

  if (VAR_5 == ((void*)0) && FUNC_7(&VAR_7)) {
   FUNC_11("waiting for readers\n");
   FUNC_0(VAR_4);
   FUNC_12();
   FUNC_0(VAR_3);
  }


  if (!(FUNC_1() & VAR_0) && FUNC_7(&VAR_7)) {
   FUNC_11("waiting for data (in_len = %i) (circ: %i %i)\n",
    VAR_9, VAR_7.tail, VAR_7.head);
   if (VAR_9)
    FUNC_12();
   else
    FUNC_13(VAR_2);
   continue;
  }


  if (FUNC_1() & VAR_0) {
   struct tty_struct *VAR_11;
   FUNC_9(&VAR_6);
   VAR_11 = (struct tty_struct *)VAR_5;
   if (VAR_11 != ((void*)0)) {
    uint32_t VAR_12 = FUNC_2();
    if (VAR_9 == 0) {
     FUNC_11("incoming length: 0x%08x\n", VAR_12);
     VAR_9 = VAR_12;
    } else {
     size_t VAR_13 = (4 <= VAR_9 ? 4 : VAR_9);
     FUNC_11("  incoming data: 0x%08x (pushing %zu)\n", VAR_12, VAR_13);
     VAR_9 -= VAR_13;
     FUNC_15(VAR_11, (unsigned char *)&VAR_12, VAR_13);
     FUNC_14(VAR_11);
    }
   }
   FUNC_10(&VAR_6);
  }


  if (!(FUNC_1() & VAR_1) && !FUNC_7(&VAR_7)) {
   if (VAR_10 == 0) {
    VAR_10 = FUNC_6(&VAR_7);
    FUNC_3(VAR_10);
    FUNC_11("outgoing length: 0x%08x\n", VAR_10);
   } else {
    struct tty_struct *VAR_14;
    int VAR_15 = VAR_7.tail;
    size_t VAR_16 = (4 <= VAR_10 ? 4 : VAR_10);
    uint32_t VAR_17 =
    FUNC_4(
     FUNC_5(&VAR_7, VAR_15 + 0),
     FUNC_5(&VAR_7, VAR_15 + 1),
     FUNC_5(&VAR_7, VAR_15 + 2),
     FUNC_5(&VAR_7, VAR_15 + 3)
    );
    VAR_7.tail += VAR_16;
    VAR_10 -= VAR_16;
    FUNC_9(&VAR_6);
    VAR_14 = (struct tty_struct *)VAR_5;
    if (VAR_14)
     FUNC_16(VAR_14);
    FUNC_10(&VAR_6);
    FUNC_11("  outgoing data: 0x%08x (pushing %zu)\n", VAR_17, VAR_16);
   }
  }
 }

 FUNC_0(VAR_3);
 return 0;
}
