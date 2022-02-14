
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_port_info {int host_flags; } ;
struct ide_hw {int dummy; } ;
typedef int hw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ide_port_info const*,struct ide_hw**,int,int *) ;
 int FUNC_1 (struct ide_hw**,struct ide_hw*,int,struct ide_port_info const*,unsigned long) ;
 int FUNC_2 (struct ide_hw**,int ,int) ;

int FUNC_3(const struct ide_port_info *VAR_3, unsigned long VAR_4)
{
 struct ide_hw VAR_5[2], *VAR_6[] = { ((void*)0), ((void*)0) };

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 if ((VAR_3->host_flags & VAR_1) == 0)
  FUNC_1(VAR_6, &VAR_5[0], 0, VAR_3, VAR_4);
 FUNC_1(VAR_6, &VAR_5[1], 1, VAR_3, VAR_4);

 if (VAR_6[0] == ((void*)0) && VAR_6[1] == ((void*)0) &&
     (VAR_3->host_flags & VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_6, 2, ((void*)0));
}
