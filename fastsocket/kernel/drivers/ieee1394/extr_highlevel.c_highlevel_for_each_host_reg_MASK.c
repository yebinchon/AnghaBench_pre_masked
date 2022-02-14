
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int id; scalar_t__ update_config_rom; } ;
struct hpsb_highlevel {int name; int (* add_host ) (struct hpsb_host*) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hpsb_host*) ;
 int FUNC_2 (struct hpsb_host*) ;

__attribute__((used)) static int FUNC_3(struct hpsb_host *VAR_0, void *VAR_1)
{
 struct hpsb_highlevel *VAR_2 = VAR_1;

 VAR_2->add_host(VAR_0);

 if (VAR_0->update_config_rom && FUNC_1(VAR_0) < 0)
  FUNC_0("Failed to generate Configuration ROM image for host "
    "%s-%d", VAR_2->name, VAR_0->id);
 return 0;
}
