
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ata_device {unsigned int class; int * id; } ;
typedef int serial ;
typedef int model ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_device*,int ,char*,...) ;
 int FUNC_1 (int const*,unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct ata_device *VAR_5, unsigned int VAR_6,
          const u16 *VAR_7)
{
 const u16 *VAR_8 = VAR_5->id;
 unsigned char VAR_9[2][VAR_1 + 1];
 unsigned char VAR_10[2][VAR_3 + 1];

 if (VAR_5->class != VAR_6) {
  FUNC_0(VAR_5, VAR_4, "class mismatch %d != %d\n",
          VAR_5->class, VAR_6);
  return 0;
 }

 FUNC_1(VAR_8, VAR_9[0], VAR_0, sizeof(VAR_9[0]));
 FUNC_1(VAR_7, VAR_9[1], VAR_0, sizeof(VAR_9[1]));
 FUNC_1(VAR_8, VAR_10[0], VAR_2, sizeof(VAR_10[0]));
 FUNC_1(VAR_7, VAR_10[1], VAR_2, sizeof(VAR_10[1]));

 if (FUNC_2(VAR_9[0], VAR_9[1])) {
  FUNC_0(VAR_5, VAR_4, "model number mismatch "
          "'%s' != '%s'\n", VAR_9[0], VAR_9[1]);
  return 0;
 }

 if (FUNC_2(VAR_10[0], VAR_10[1])) {
  FUNC_0(VAR_5, VAR_4, "serial number mismatch "
          "'%s' != '%s'\n", VAR_10[0], VAR_10[1]);
  return 0;
 }

 return 1;
}
