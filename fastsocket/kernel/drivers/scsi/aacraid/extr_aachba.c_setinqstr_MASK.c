
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_inq {char* vid; char* pid; char* prl; } ;
struct aac_driver_ident {char* vname; char* model; } ;
struct TYPE_2__ {char* AdapterTypeText; } ;
struct aac_dev {int cardtype; TYPE_1__ supplement_adapter_info; } ;


 int FUNC_0 (char**) ;
 struct aac_driver_ident* FUNC_1 (int ) ;
 char** VAR_0 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct scsi_inq*,char,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct aac_dev *VAR_1, void *VAR_2, int VAR_3)
{
 struct scsi_inq *VAR_4;

 VAR_4 = (struct scsi_inq *)(VAR_2);
 FUNC_4(VAR_4, ' ', sizeof(*VAR_4));

 if (VAR_1->supplement_adapter_info.AdapterTypeText[0]) {
  char * VAR_5 = VAR_1->supplement_adapter_info.AdapterTypeText;
  int VAR_6;
  if ((VAR_5[0] == 'A') && (VAR_5[1] == 'O') && (VAR_5[2] == 'C'))
   FUNC_2("SMC", VAR_4->vid);
  else {
   VAR_6 = sizeof(VAR_4->vid);
   while (*VAR_5 && *VAR_5 != ' ' && --VAR_6)
    ++VAR_5;
   VAR_6 = *VAR_5;
   *VAR_5 = '\0';
   FUNC_2 (VAR_1->supplement_adapter_info.AdapterTypeText,
       VAR_4->vid);
   *VAR_5 = VAR_6;
   while (*VAR_5 && *VAR_5 != ' ')
    ++VAR_5;
  }
  while (*VAR_5 == ' ')
   ++VAR_5;

  VAR_6 = 0;
  if (FUNC_5(VAR_5) > sizeof(VAR_4->pid)) {
   VAR_6 = VAR_5[sizeof(VAR_4->pid)];
   VAR_5[sizeof(VAR_4->pid)] = '\0';
  }
  FUNC_2 (VAR_5, VAR_4->pid);
  if (VAR_6)
   VAR_5[sizeof(VAR_4->pid)] = VAR_6;
 } else {
  struct aac_driver_ident *VAR_7 = FUNC_1(VAR_1->cardtype);

  FUNC_2 (VAR_7->vname, VAR_4->vid);

  FUNC_2 (VAR_7->model, VAR_4->pid);
 }

 if (VAR_3 < FUNC_0(VAR_0)){
  char *VAR_8 = VAR_4->pid;

  for ( ; *VAR_8 != ' '; VAR_8++);

  if (FUNC_3(VAR_8-4, "RAID", 4) == 0)
   *(VAR_8 -= 4) = ' ';
  if (((VAR_8 - VAR_4->pid) + FUNC_5(VAR_0[VAR_3]))
   < (sizeof(VAR_4->pid) + sizeof(VAR_4->prl)))
   FUNC_2 (VAR_0[VAR_3], VAR_8 + 1);
 }
 FUNC_2 ("V1.0", VAR_4->prl);
}
