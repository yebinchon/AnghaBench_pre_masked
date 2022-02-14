
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u32 ;
struct serial_console_data {int * close; int tstc; int getc; int putc; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,char*,void**,int) ;
 void* VAR_2 ;
 void* FUNC_1 (void*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char volatile*) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(void *VAR_8, struct serial_console_data *VAR_9)
{
 void *VAR_10;
 int VAR_11, VAR_12;
 volatile char *VAR_13;

 VAR_11 = FUNC_0(VAR_8, "virtual-reg", &VAR_10, sizeof(VAR_10));
 if (VAR_11 != sizeof(VAR_10))
  goto err_out;
 VAR_2 = VAR_10;

 VAR_13 = FUNC_1(VAR_8, "sdma");
 if (VAR_13 == ((void*)0))
  goto err_out;

 VAR_7 = FUNC_1(VAR_8, "mpscintr");
 if (VAR_7 == ((void*)0))
  goto err_out;

 VAR_11 = FUNC_0(VAR_8, "cell-index", &VAR_10, sizeof(VAR_10));
 if (VAR_11 != sizeof(VAR_10))
  goto err_out;
 VAR_12 = (int)VAR_10;

 VAR_7 += (VAR_12 == 0) ? 0x4 : 0xc;


 FUNC_3((u32 *)(VAR_7 + VAR_0), 0);
 FUNC_3((u32 *)(VAR_7 + VAR_0), 0);
 FUNC_3((u32 *)(VAR_7 + VAR_1), 0);
 FUNC_3((u32 *)(VAR_7 + VAR_1), 0);

 FUNC_2(VAR_13);

 VAR_9->open = VAR_4;
 VAR_9->putc = VAR_5;
 VAR_9->getc = VAR_3;
 VAR_9->tstc = VAR_6;
 VAR_9->close = ((void*)0);

 return 0;

err_out:
 return -1;
}
