
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; int name; scalar_t__ driver_data; } ;
struct serial_struct {int dummy; } ;
struct m68k_serial {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 unsigned int VAR_4 ;


 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (struct m68k_serial*,struct m68k_serial*,int) ;
 int FUNC_2 (struct m68k_serial*,unsigned int*) ;
 int FUNC_3 (struct m68k_serial*,struct serial_struct*) ;
 int FUNC_4 (struct m68k_serial*,unsigned long) ;
 scalar_t__ FUNC_5 (struct m68k_serial*,int ,char*) ;
 int FUNC_6 (struct m68k_serial*,struct serial_struct*) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*,int ) ;

__attribute__((used)) static int FUNC_9(struct tty_struct *VAR_9, struct file * VAR_10,
      unsigned int VAR_11, unsigned long VAR_12)
{
 int VAR_13;
 struct m68k_serial * VAR_14 = (struct m68k_serial *)VAR_9->driver_data;
 int VAR_15;

 if (FUNC_5(VAR_14, VAR_9->name, "rs_ioctl"))
  return -VAR_2;

 if ((VAR_11 != 131) && (VAR_11 != 128) &&
     (VAR_11 != VAR_4) && (VAR_11 != VAR_5) &&
     (VAR_11 != VAR_6) && (VAR_11 != 129)) {
  if (VAR_9->flags & (1 << VAR_7))
      return -VAR_1;
 }

 switch (VAR_11) {
  case 133:
   VAR_15 = FUNC_7(VAR_9);
   if (VAR_15)
    return VAR_15;
   FUNC_8(VAR_9, 0);
   if (!VAR_12)
    FUNC_4(VAR_14, 250);
   return 0;
  case 132:
   VAR_15 = FUNC_7(VAR_9);
   if (VAR_15)
    return VAR_15;
   FUNC_8(VAR_9, 0);
   FUNC_4(VAR_14, VAR_12 ? VAR_12*(100) : 250);
   return 0;
  case 131:
   if (FUNC_0(VAR_8, (void *) VAR_12,
      sizeof(struct serial_struct)))
    return FUNC_3(VAR_14,
            (struct serial_struct *) VAR_12);
   return -VAR_0;
  case 128:
   return FUNC_6(VAR_14,
            (struct serial_struct *) VAR_12);
  case 130:
   if (FUNC_0(VAR_8, (void *) VAR_12,
      sizeof(unsigned int)))
    return FUNC_2(VAR_14, (unsigned int *) VAR_12);
   return -VAR_0;
  case 129:
   if (!FUNC_0(VAR_8, (void *) VAR_12,
      sizeof(struct m68k_serial)))
    return -VAR_0;
   FUNC_1((struct m68k_serial *) VAR_12,
        VAR_14, sizeof(struct m68k_serial));
   return 0;

  default:
   return -VAR_3;
  }
 return 0;
}
