
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* myname; } ;
struct TYPE_16__ {TYPE_1__ Dir; } ;
struct TYPE_17__ {scalar_t__ dn_type; TYPE_2__ dn_typeinfo; } ;
typedef TYPE_3__ devnode_t ;
typedef int devfs_event_log_t ;
struct TYPE_18__ {TYPE_3__* de_dnp; } ;
typedef TYPE_4__ devdirent_t ;
struct TYPE_20__ {TYPE_3__* de_dnp; } ;
struct TYPE_19__ {char const* de_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_3__*,scalar_t__,int *,int *,int *,TYPE_4__**) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,char*) ;
 TYPE_8__* VAR_5 ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*,int ) ;
 int FUNC_3 (char const*,int,TYPE_3__*,char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char * VAR_6,
     devnode_t * VAR_7,
     int VAR_8,
     devnode_t * * VAR_9,
     devfs_event_log_t VAR_10)
{
 devnode_t * VAR_11 = ((void*)0);
 int VAR_12 = 0;
 const char * VAR_13;





 if (!VAR_7)
     VAR_7 = VAR_5->de_dnp;

 if (VAR_7->dn_type != VAR_1)
     return VAR_4;

 if (FUNC_5(VAR_6) > (VAR_0 - 1))
     return VAR_2;




 VAR_13 = VAR_6;

 while (*VAR_13 == '/')
     VAR_13++;

 *VAR_9 = ((void*)0);

 while (1) {
     char VAR_14[VAR_0];
     devdirent_t * VAR_15;
     const char * VAR_16;

     if (*VAR_13 == 0) {

  *VAR_9 = VAR_7;
  break;
     }
     VAR_16 = VAR_13;
     while (*VAR_13 != '/' && *VAR_13)
  VAR_13++;

     FUNC_4(VAR_14, VAR_16, (VAR_13 - VAR_16) + 1);
     if (*VAR_13 == '/')
  VAR_13++;

     VAR_15 = FUNC_1(VAR_7, VAR_14);
     if (VAR_15) {
  VAR_11 = VAR_15->de_dnp;
  if (VAR_11->dn_type != VAR_1) {
      VAR_12 = VAR_4;
      break;
  }
     }
     else {
  if (!VAR_8) {
      VAR_12 = VAR_3;
      break;
  }
  VAR_12 = FUNC_0(VAR_14, VAR_7,
           VAR_1, ((void*)0), ((void*)0), ((void*)0), &VAR_15);
  if (VAR_12)
      break;
  VAR_11 = VAR_15->de_dnp;






  FUNC_2(VAR_7->dn_typeinfo.Dir.myname, VAR_15, VAR_10);
     }
     VAR_7 = VAR_11;
 }
 return (VAR_12);
}
