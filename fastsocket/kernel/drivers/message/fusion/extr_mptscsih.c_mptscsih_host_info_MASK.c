
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct info_str {char* buffer; int length; scalar_t__ offset; scalar_t__ pos; } ;
typedef scalar_t__ off_t ;
struct TYPE_5__ {int Word; } ;
struct TYPE_6__ {int NumberOfPorts; TYPE_1__ FWVersion; } ;
struct TYPE_7__ {int req_depth; TYPE_2__ facts; int prod_name; int name; } ;
typedef TYPE_3__ MPT_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (struct info_str*,char*,int ,...) ;

__attribute__((used)) static int
FUNC_1(MPT_ADAPTER *VAR_1, char *VAR_2, off_t VAR_3, int VAR_4)
{
 struct info_str VAR_5;

 VAR_5.buffer = VAR_2;
 VAR_5.length = VAR_4;
 VAR_5.offset = VAR_3;
 VAR_5.pos = 0;

 FUNC_0(&VAR_5, "%s: %s, ", VAR_1->name, VAR_1->prod_name);
 FUNC_0(&VAR_5, "%s%08xh, ", VAR_0, VAR_1->facts.FWVersion.Word);
 FUNC_0(&VAR_5, "Ports=%d, ", VAR_1->facts.NumberOfPorts);
 FUNC_0(&VAR_5, "MaxQ=%d\n", VAR_1->req_depth);

 return ((VAR_5.pos > VAR_5.offset) ? VAR_5.pos - VAR_5.offset : 0);
}
