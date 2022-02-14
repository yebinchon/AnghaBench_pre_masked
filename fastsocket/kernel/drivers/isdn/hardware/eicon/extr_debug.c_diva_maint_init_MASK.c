
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;
typedef int MSG_QUEUE ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int VAR_8 ;
 int FUNC_3 (int *,int *,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,char*) ;

int FUNC_5 (byte* VAR_11, unsigned long VAR_12, int VAR_13) {
  if (VAR_7 || (!VAR_11) || (VAR_12 < (4096*4))) {
    return (-1);
  }

  VAR_1[0] = 0;
  VAR_3 = -1;
  VAR_2 = -1;

  VAR_5 = VAR_11;

  FUNC_1 (&VAR_9, &VAR_10);

  *(dword*)VAR_11 = (dword)VAR_0;
  VAR_11 += sizeof(dword);
  VAR_12 -= sizeof(dword);

  *(dword*)VAR_11 = 2048;
  VAR_11 += sizeof(dword);
  VAR_12 -= sizeof(dword);

  FUNC_4 (VAR_11, "KERNEL MODE BUFFER\n");
  VAR_11 += 2048;
  VAR_12 -= 2048;

  *(dword*)VAR_11 = 0;
  VAR_11 += sizeof(dword);
  VAR_12 -= sizeof(dword);

  *(void**)VAR_11 = (void*)(VAR_11+sizeof(void*));
  VAR_11 += sizeof(void*);
  VAR_12 -= sizeof(void*);

  VAR_7 = (MSG_QUEUE*)VAR_11;
  FUNC_3 (VAR_7, VAR_11 + sizeof(MSG_QUEUE), VAR_12 - sizeof(MSG_QUEUE) - 512);
  VAR_8 = 0;

  if (!VAR_13) {
    VAR_8 = 1;
  }


 if (FUNC_2 (&VAR_6, "dbg_init")) {
    VAR_7 = ((void*)0);
    VAR_5 = ((void*)0);
    VAR_8 = 0;
  return (-1);
  }

 if (FUNC_2 (&VAR_4, "dbg_init")) {
    FUNC_0(&VAR_6, "dbg_init");
    VAR_7 = ((void*)0);
    VAR_5 = ((void*)0);
    VAR_8 = 0;
  return (-1);
  }

  return (0);
}
