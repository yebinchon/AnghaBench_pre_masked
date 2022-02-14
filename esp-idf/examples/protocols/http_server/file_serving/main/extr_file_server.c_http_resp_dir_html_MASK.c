
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_size; } ;
struct dirent {scalar_t__ d_type; char const* d_name; } ;
struct TYPE_6__ {char* uri; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;
typedef int entrypath ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int ,char*,char const*,char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const*,size_t const) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int * FUNC_6 (char const*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,char const*,int) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static esp_err_t FUNC_12(httpd_req_t *VAR_6, const char *VAR_7)
{
    char VAR_8[VAR_3];
    char VAR_9[16];
    const char *VAR_10;

    struct dirent *VAR_11;
    struct stat VAR_12;

    DIR *VAR_13 = FUNC_6(VAR_7);
    const size_t VAR_14 = FUNC_11(VAR_7);


    FUNC_10(VAR_8, VAR_7, sizeof(VAR_8));

    if (!VAR_13) {
        FUNC_0(VAR_5, "Failed to stat dir : %s", VAR_7);

        FUNC_4(VAR_6, VAR_4, "Directory does not exist");
        return VAR_1;
    }


    FUNC_5(VAR_6, "<!DOCTYPE html><html><body>");


    extern const unsigned char VAR_15[] asm("_binary_upload_script_html_start");
    extern const unsigned char VAR_16[] asm("_binary_upload_script_html_end");
    const size_t VAR_17 = (VAR_16 - VAR_15);


    FUNC_3(VAR_6, (const char *)VAR_15, VAR_17);


    FUNC_5(VAR_6,
        "<table class=\"fixed\" border=\"1\">"
        "<col width=\"800px\" /><col width=\"300px\" /><col width=\"300px\" /><col width=\"100px\" />"
        "<thead><tr><th>Name</th><th>Type</th><th>Size (Bytes)</th><th>Delete</th></tr></thead>"
        "<tbody>");


    while ((VAR_11 = FUNC_7(VAR_13)) != ((void*)0)) {
        VAR_10 = (VAR_11->d_type == VAR_0 ? "directory" : "file");

        FUNC_10(VAR_8 + VAR_14, VAR_11->d_name, sizeof(VAR_8) - VAR_14);
        if (FUNC_9(VAR_8, &VAR_12) == -1) {
            FUNC_0(VAR_5, "Failed to stat %s : %s", VAR_10, VAR_11->d_name);
            continue;
        }
        FUNC_8(VAR_9, "%ld", VAR_12.st_size);
        FUNC_1(VAR_5, "Found %s : %s (%s bytes)", VAR_10, VAR_11->d_name, VAR_9);


        FUNC_5(VAR_6, "<tr><td><a href=\"");
        FUNC_5(VAR_6, VAR_6->uri);
        FUNC_5(VAR_6, VAR_11->d_name);
        if (VAR_11->d_type == VAR_0) {
            FUNC_5(VAR_6, "/");
        }
        FUNC_5(VAR_6, "\">");
        FUNC_5(VAR_6, VAR_11->d_name);
        FUNC_5(VAR_6, "</a></td><td>");
        FUNC_5(VAR_6, VAR_10);
        FUNC_5(VAR_6, "</td><td>");
        FUNC_5(VAR_6, VAR_9);
        FUNC_5(VAR_6, "</td><td>");
        FUNC_5(VAR_6, "<form method=\"post\" action=\"/delete");
        FUNC_5(VAR_6, VAR_6->uri);
        FUNC_5(VAR_6, VAR_11->d_name);
        FUNC_5(VAR_6, "\"><button type=\"submit\">Delete</button></form>");
        FUNC_5(VAR_6, "</td></tr>\n");
    }
    FUNC_2(VAR_13);


    FUNC_5(VAR_6, "</tbody></table>");


    FUNC_5(VAR_6, "</body></html>");


    FUNC_5(VAR_6, ((void*)0));
    return VAR_2;
}
