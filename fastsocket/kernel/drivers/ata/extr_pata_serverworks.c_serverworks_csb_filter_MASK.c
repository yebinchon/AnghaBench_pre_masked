
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {scalar_t__ class; int id; } ;
typedef int model_num ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (struct ata_device*,unsigned long) ;
 int FUNC_1 (int ,char*,int ,int) ;
 char** VAR_4 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static unsigned long FUNC_3(struct ata_device *VAR_5, unsigned long VAR_6)
{
 const char *VAR_7;
 char VAR_8[VAR_2 + 1];
 int VAR_9;


 if (VAR_5->class != VAR_0)
  return FUNC_0(VAR_5, VAR_6);


 FUNC_1(VAR_5->id, VAR_8, VAR_1, sizeof(VAR_8));

 for (VAR_9 = 0; (VAR_7 = VAR_4[VAR_9]) != ((void*)0); VAR_9++) {
  if (!FUNC_2(VAR_7, VAR_8))
   VAR_6 &= ~(0xE0 << VAR_3);
 }
 return FUNC_0(VAR_5, VAR_6);
}
