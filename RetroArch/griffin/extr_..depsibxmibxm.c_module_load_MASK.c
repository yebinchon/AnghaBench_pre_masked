
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct data {int dummy; } ;


 int data_ascii (struct data*,int,int,char*) ;
 int memcmp (int ,char*,int) ;
 struct module* module_load_mod (struct data*,char*) ;
 struct module* module_load_s3m (struct data*,char*) ;
 struct module* module_load_xm (struct data*,char*) ;

struct module* module_load( struct data *data, char *message ) {
 char ascii[ 16 ];
 struct module* module;
 if( !memcmp( data_ascii( data, 0, 16, ascii ), "Extended Module:", 16 ) ) {
  module = module_load_xm( data, message );
 } else if( !memcmp( data_ascii( data, 44, 4, ascii ), "SCRM", 4 ) ) {
  module = module_load_s3m( data, message );
 } else {
  module = module_load_mod( data, message );
 }
 return module;
}
