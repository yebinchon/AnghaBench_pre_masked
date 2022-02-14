
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int u_long ;
struct proc {int dummy; } ;
struct pfioc_iface_64 {int pfiio_esize; char* pfiio_name; int pfiio_flags; int pfiio_size; int pfiio_buffer; } ;
struct pfioc_iface_32 {int pfiio_esize; char* pfiio_name; int pfiio_flags; int pfiio_size; int pfiio_buffer; } ;
struct pfi_uif {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct proc*) ;

__attribute__((used)) static int
FUNC_5(u_long VAR_1, struct pfioc_iface_32 *VAR_2,
    struct pfioc_iface_64 *VAR_3, struct proc *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = 0;

 switch (VAR_1) {
 case 129: {
  user_addr_t VAR_7;
  int VAR_8;

  VAR_7 = (VAR_5 ? VAR_3->pfiio_buffer : VAR_2->pfiio_buffer);
  VAR_8 = (VAR_5 ? VAR_3->pfiio_esize : VAR_2->pfiio_esize);


  if (VAR_8 != sizeof (struct pfi_uif)) {
   VAR_6 = VAR_0;
   break;
  }
  if (VAR_5)
   VAR_3->pfiio_name[sizeof (VAR_3->pfiio_name) - 1] = '\0';
  else
   VAR_2->pfiio_name[sizeof (VAR_2->pfiio_name) - 1] = '\0';
  VAR_6 = FUNC_2(
      VAR_5 ? VAR_3->pfiio_name : VAR_2->pfiio_name, VAR_7,
      VAR_5 ? &VAR_3->pfiio_size : &VAR_2->pfiio_size);
  break;
 }

 case 128: {
  if (VAR_5)
   VAR_3->pfiio_name[sizeof (VAR_3->pfiio_name) - 1] = '\0';
  else
   VAR_2->pfiio_name[sizeof (VAR_2->pfiio_name) - 1] = '\0';

  VAR_6 = FUNC_3(
      VAR_5 ? VAR_3->pfiio_name : VAR_2->pfiio_name,
      VAR_5 ? VAR_3->pfiio_flags : VAR_2->pfiio_flags);
  break;
 }

 case 130: {
  if (VAR_5)
   VAR_3->pfiio_name[sizeof (VAR_3->pfiio_name) - 1] = '\0';
  else
   VAR_2->pfiio_name[sizeof (VAR_2->pfiio_name) - 1] = '\0';

  VAR_6 = FUNC_1(
      VAR_5 ? VAR_3->pfiio_name : VAR_2->pfiio_name,
      VAR_5 ? VAR_3->pfiio_flags : VAR_2->pfiio_flags);
  break;
 }

 default:
  FUNC_0(0);

 }

 return (VAR_6);
}
