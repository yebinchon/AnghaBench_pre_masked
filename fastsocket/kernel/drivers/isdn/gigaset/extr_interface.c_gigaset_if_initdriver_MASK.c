
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; } ;
struct tty_driver {int flags; char const* driver_name; char const* name; unsigned int num; TYPE_1__ init_termios; int owner; int minor_start; int subtype; int type; int major; int magic; } ;
struct gigaset_driver {unsigned int minors; int have_tty; struct tty_driver* tty; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct tty_driver* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_13 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct tty_driver*) ;
 int FUNC_4 (struct tty_driver*) ;
 int FUNC_5 (struct tty_driver*,int *) ;
 TYPE_1__ VAR_14 ;

void FUNC_6(struct gigaset_driver *VAR_15, const char *VAR_16,
      const char *VAR_17)
{
 unsigned VAR_18 = VAR_15->minors;
 int VAR_19;
 struct tty_driver *VAR_20;

 VAR_15->have_tty = 0;

 if ((VAR_15->tty = FUNC_0(VAR_18)) == ((void*)0))
  goto enomem;
 VAR_20 = VAR_15->tty;

 VAR_20->magic = VAR_10,
 VAR_20->major = VAR_5,
 VAR_20->type = VAR_12,
 VAR_20->subtype = VAR_7,
 VAR_20->flags = VAR_11 | VAR_9;

 VAR_20->driver_name = VAR_16;
 VAR_20->name = VAR_17;
 VAR_20->minor_start = VAR_15->minor;
 VAR_20->num = VAR_15->minors;

 VAR_20->owner = VAR_8;

 VAR_20->init_termios = VAR_14;
 VAR_20->init_termios.c_cflag = VAR_0 | VAR_3 | VAR_2 | VAR_6 | VAR_1;
 FUNC_5(VAR_20, &VAR_13);

 VAR_19 = FUNC_4(VAR_20);
 if (VAR_19 < 0) {
  FUNC_2("error %d registering tty driver\n", VAR_19);
  goto error;
 }
 FUNC_1(VAR_4, "tty driver initialized");
 VAR_15->have_tty = 1;
 return;

enomem:
 FUNC_2("out of memory\n");
error:
 if (VAR_15->tty)
  FUNC_3(VAR_15->tty);
}
