
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cuid; } ;
struct shmid_ds {int shm_cpid; int shm_segsz; TYPE_1__ shm_perm; scalar_t__ shm_nattch; } ;
typedef int key_t ;
struct TYPE_6__ {int shmid; scalar_t__ shmaddr; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,int ,struct shmid_ds*) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_5 ;

void FUNC_6(int VAR_6)
{

  int VAR_7 = ('d'<<24) | ('o'<<16) | ('o'<<8) | 'm';
  struct shmid_ds VAR_8;
  int VAR_9 = 320*200;
  int VAR_10;
  int VAR_11;

  int VAR_12=5;


  do
  {
    VAR_10 = FUNC_5((key_t) VAR_7, VAR_9, 0777);
    if (VAR_10 != -1)
    {
      VAR_11=FUNC_4(VAR_10, VAR_2, &VAR_8);
      if (!VAR_11)
      {
 if (VAR_8.shm_nattch)
 {
   FUNC_1(VAR_5, "User %d appears to be running "
    "DOOM.  Is that wise?\n", VAR_8.shm_cpid);
   VAR_7++;
 }
 else
 {
   if (FUNC_2() == VAR_8.shm_perm.cuid)
   {
     VAR_11 = FUNC_4(VAR_10, VAR_1, 0);
     if (!VAR_11)
       FUNC_1(VAR_5,
        "Was able to kill my old shared memory\n");
     else
       FUNC_0("Was NOT able to kill my old shared memory");

     VAR_10 = FUNC_5((key_t)VAR_7, VAR_6, VAR_0|0777);
     if (VAR_10==-1)
       FUNC_0("Could not get shared memory");

     VAR_11=FUNC_4(VAR_10, VAR_2, &VAR_8);

     break;

   }
   if (VAR_6 >= VAR_8.shm_segsz)
   {
     FUNC_1(VAR_5,
      "will use %d's stale shared memory\n",
      VAR_8.shm_cpid);
     break;
   }
   else
   {
     FUNC_1(VAR_5,
      "warning: can't use stale "
      "shared memory belonging to id %d, "
      "key=0x%x\n",
      VAR_8.shm_cpid, VAR_7);
     VAR_7++;
   }
 }
      }
      else
      {
 FUNC_0("could not get stats on key=%d", VAR_7);
      }
    }
    else
    {
      VAR_10 = FUNC_5((key_t)VAR_7, VAR_6, VAR_0|0777);
      if (VAR_10==-1)
      {
 extern int VAR_13;
 FUNC_1(VAR_5, "errno=%d\n", VAR_13);
 FUNC_0("Could not get any shared memory");
      }
      break;
    }
  } while (--VAR_12);

  if (!VAR_12)
  {
    FUNC_0("Sorry, system too polluted with stale "
     "shared memory segments.\n");
    }

  VAR_3.shmid = VAR_10;


  VAR_4->data = VAR_3.shmaddr = FUNC_3(VAR_10, 0, 0);

  FUNC_1(VAR_5, "shared memory id=%d, addr=0x%x\n", VAR_10,
   (int) (VAR_4->data));
}
