
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct bpf_d {int bd_flags; int bd_uuid; } ;


 int VAR_0 ;
 struct bpf_d* VAR_1 ;
 struct bpf_d** VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct bpf_d *
FUNC_1(uuid_t VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct bpf_d *VAR_6 = VAR_2[VAR_5];

  if (VAR_6 == ((void*)0) || VAR_6 == VAR_1 ||
      (VAR_6->bd_flags & VAR_0) != 0)
   continue;
  if (FUNC_0(VAR_4, VAR_6->bd_uuid) == 0)
   return (VAR_6);
 }

 return (((void*)0));
}
