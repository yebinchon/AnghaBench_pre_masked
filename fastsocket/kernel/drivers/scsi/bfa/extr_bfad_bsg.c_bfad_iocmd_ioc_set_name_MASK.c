
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int port_name; int adapter_name; } ;
struct bfa_bsg_ioc_name_s {int status; int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1(struct bfad_s *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct bfa_bsg_ioc_name_s *VAR_6 = (struct bfa_bsg_ioc_name_s *) VAR_4;

 if (VAR_5 == VAR_1)
  FUNC_0(VAR_3->adapter_name, VAR_6->name);
 else if (VAR_5 == VAR_2)
  FUNC_0(VAR_3->port_name, VAR_6->name);

 VAR_6->status = VAR_0;
 return 0;
}
