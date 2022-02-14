
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_link {int ap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_link*,int ,char*) ;
 int FUNC_1 (struct ata_link*,unsigned int*,unsigned long) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_1, unsigned int *VAR_2,
          unsigned long VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->ap);
 if (VAR_4) {
  FUNC_0(VAR_1, VAR_0,
    "hardreset failed (port not ready)\n");
  return VAR_4;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
